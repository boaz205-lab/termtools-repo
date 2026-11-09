#!/bin/bash

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
BIN_DIR="$SCRIPT_DIR/../bin"
if ! grep -q "$SCRIPT_DIR" ~/.bashrc; then
  echo "export PATH=\"\$PATH:$SCRIPT_DIR\"" >> ~/.bashrc
fi

if ! grep -q "$SCRIPT_DIR" ~/.zshrc; then
  echo "export PATH=\"\$PATH:$SCRIPT_DIR\"" >> ~/.zshrc
fi

file=$1
name="${file##*/}"
base="${name%.*}"
output="$BIN_DIR/$base"

mkdir -p "$BIN_DIR"

if [[ $file == *.c ]]; then
  echo "DEBUG: file=[$file] base=[$base]"
  gcc "$file" -o "$output"

  if [ $? -eq 0 ]; then
    "$output"
  else
    echo "Compilation failed"
  fi

elif [[ $file == *.cpp ]]; then
  echo "DEBUG: file=[$file] base=[$base]"
  g++ "$file" -o "$output"

  if [ $? -eq 0 ]; then
    "$output"
  else
    echo "Compilation failed"
  fi

else
  echo "Unsupported file type: $file"
fi
