# Dev Scripts

## 1. run.sh

### What it does

Compiles a C/C++ source file into the repository's `bin/` directory and runs it - no more typing 'gcc file.c -o file && ./file' manually everytime.
Also self installs to PATH on first run to enable calling from anywhere afterward.

### Requirements

- bash
- gcc
- g++

### Setup

### _Clone repo_

```bash
git clone https://github.com/boaz205-lab/termtools-repo.git
cd dev
```

### _Make it executable_

```bash
chmod +x run.sh
```

### _Trigger PATH install_

```bash
./run.sh myfile.c
source ~/.bashrc    # relad once after first run
run.sh myfile.c    # now works from anywhere
```

Compiled executables are written to `../bin/` relative to `run.sh`, regardless of the current working directory.

**_Known limitations_**

- Self install writes to ~/.bashrc only. Does not support fish and zsh; fish users must manually add the PATH line to ```~/.config/fish/config.fish```
