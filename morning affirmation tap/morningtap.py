from gtts import gTTS
from pydub import AudioSegment

# Affirmation text
affirmation_text = """
Thank you, God, for this beautiful day...
(Paste full affirmation here or keep short for testing)
"""

# Generate voice
tts = gTTS(text=affirmation_text, lang='en')
tts.save("voice.mp3")

# Load voice and background music
voice = AudioSegment.from_file("voice.mp3")
music = AudioSegment.from_file("background_music.mp3")

# Adjust music volume
music = music - 20  # Lower background music volume

# Loop background music if shorter than voice
if len(music) < len(voice):
    repeat_count = int(len(voice) / len(music)) + 1
    music = music * repeat_count

# Trim music to match voice length
music = music[:len(voice)]

# Overlay voice over music
combined = music.overlay(voice)

# Export final audio
combined.export("morning_affirmation_with_music.mp3", format="mp3")

print("Affirmation with background music saved as 'morning_affirmation_with_music.mp3'")
