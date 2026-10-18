# FrameForgive

Experimental Geode mod project targeting Geometry Dash Android 2.2081.

## Current status

This is a buildable project scaffold, not a functioning forgiveness engine. Its settings appear in Geode's normal mod settings page. The current code only logs the selected settings; it does not alter inputs, collisions, physics, or player movement. Do not treat the enabled switch as active gameplay protection yet.

## Settings

- Enable FrameForgive: master switch reserved for the engine.
- Timing window: 0–10 frames.
- Prediction horizon: 60–480 physics ticks; 480 ticks is about 2 seconds at 240 ticks/s.
- Prediction debug logging.

## Build without installing tools locally

1. Create a new empty GitHub repository.
2. Upload all files in this folder, including `.github/workflows/android.yml`.
3. Open the repository's **Actions** tab and run **Build Android mod**, or push a commit to `main`/`master`.
4. Download the `FrameForgive-Android64` artifact from the successful workflow run.
5. Extract the artifact and copy the `.geode` file to `Android/media/com.geode.launcher/game/geode/mods/` using a file manager. Restart Geometry Dash through Geode.

If the build fails, open the failed workflow and share the first compiler/configuration error. The SDK version or Android game binding metadata may need adjusting.

## Important engineering note

A correct ±10-frame temporal forgiveness engine needs to model the real game's input queue, physics, collisions, triggers, and future interactions. Simply skipping death or ignoring hazard collisions is not equivalent and is deliberately not implemented here. The 480-tick setting currently records the intended target horizon only.
