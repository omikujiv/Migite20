#!/usr/bin/bash
git add .
if [ $# -eq 0 ]; then
    git commit -m "Update_file(AutoComment)"
else
    git commit -m $1
fi
git push