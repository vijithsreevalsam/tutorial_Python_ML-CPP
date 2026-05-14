FROM mcr.microsoft.com/devcontainers/base:noble

USER root

# Install VNC and Desktop Environment
RUN apt-get update && apt-get install -y \
    xfce4 \
    xfce4-goodies \
    tigervnc-standalone-server \
    tigervnc-common \
    novnc \
    websockify \
    dbus-x11 \
    sudo \
    && rm -rf /var/lib/apt/lists/*

# Symlink noVNC entry point
RUN ln -sf /usr/share/novnc/vnc.html /usr/share/novnc/index.html 2>/dev/null || true

USER vscode
WORKDIR /home/vscode

# Pre-configure VNC password
RUN mkdir -p /home/vscode/.vnc && \
    echo "robotics" | vncpasswd -f > /home/vscode/.vnc/passwd && \
    chmod 600 /home/vscode/.vnc/passwd

# xstartup to launch XFCE
RUN echo '#!/bin/bash\n\
unset SESSION_MANAGER\n\
unset DBUS_SESSION_BUS_ADDRESS\n\
exec startxfce4' > /home/vscode/.vnc/xstartup && \
    chmod +x /home/vscode/.vnc/xstartup

EXPOSE 6080

# Startup script
RUN echo '#!/bin/bash\n\
vncserver :1 -geometry 1280x800 -depth 24 -localhost no\n\
exec websockify --web /usr/share/novnc/ 6080 localhost:5901' \
    > /home/vscode/start-vnc.sh && \
    chmod +x /home/vscode/start-vnc.sh

CMD ["/home/vscode/start-vnc.sh"]