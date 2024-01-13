#!/bin/bash

# Create a directory to store object files
mkdir -p obj

for file in *.c; do
    if [ -f "$file" ]; then

        filename="${file%.*}"


        gcc -c "$file" -o "obj/$filename.o"


        if [ $? -ne 0 ]; then
            echo "Error compiling $file"
            exit 1
        fi
    fi
done

echo "Compilation successful. Object files are stored in 'obj/' directory."
