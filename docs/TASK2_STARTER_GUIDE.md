# IEEE NUB Git Lab — Task 2 starter guide

> **Preparation only. Task 2 is not open for grading yet.** Use the official Git Lab assignment when the instructor announces it.

This repo is a small **Smart Plant Monitor** training project. It is safe to fork: it contains no real secrets, accounts, or student records.

## Before starting

1. Sign in to GitHub with **your own account**.
2. Fork this repository. **Uncheck "Copy the DEFAULT branch only"** so that both `main` and `feature/lcd-display` are included.
3. Work in **your fork**, not in the instructor's starter repository.
4. Open PRs with **your fork's `main` as the base**, unless the official assignment explicitly says otherwise.
5. Never commit passwords, API keys, tokens, or real `.env` secrets.

## Practice challenge

### Merge conflict
- The branches `main` and `feature/lcd-display` intentionally disagree on the `dryThreshold` line in `sensor.ino`.
- Merge the display branch into main, resolve the conflict thoughtfully, retain a working sketch, and use **38** as the resolved threshold.
- Check for conflict markers and verify the merged result.

### Ignored and previously tracked files
- Add `.gitignore` rules for `.env`, `*.log`, and `local-settings.txt`.
- `local-settings.txt` is a **dummy tracked file** included deliberately. Stop tracking it without deleting your local copy.
- Git ignore rules do not erase previously committed history. Never use real credentials during this exercise.

### Stash and safe context-switching
- Make an unfinished tracked-file edit, stash it, switch work, then restore it.
- **Important:** a remote repository alone cannot prove you ran `git stash`. The instructor will specify how this local step will be checked.

### Remote collaboration
- Clone your fork, publish your own commits and branches, and synchronize your local work with its remote.
- Create an Issue **on your fork** describing a buzzer improvement.
- Create a `feature/buzzer` branch, implement a focused change, and open a Pull Request **into your own fork's main** with a clear title and explanation.
- Include a matching issue reference (`Closes #N`, where N is your fork's real issue number). Merge after review in line with the published instructions.
- You may need to enable Issues in your fork's repository settings.

### Documentation
- Improve `README.md` so another student can understand the project, hardware pin assumptions, and how to run or test the sketch.

## How marking will work

The official Task 2 is planned for **100 practical points and 50 theory points**. Practical checks will be independent where evidence allows; incorrect work can be corrected and checked again before submission.

**GitHub can verify remote commits, files, branches, issues and pull requests. It cannot independently prove that a student ran local-only commands such as `git stash`, `git clone`, or `git pull`.** Those skills require an additional trustworthy check; this starter repo does not claim that remote results alone prove them.

Do not submit this repo for grading until the Git Lab dashboard explicitly enables Task 2.
