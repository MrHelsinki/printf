#!/bin/bash

for ((i=1; i<=10; i++)); do
    echo "Commit number $i" > file.txt
    git add file.txt
    git commit -m "Commit $i"
done

git push origin main  

echo "Done"

