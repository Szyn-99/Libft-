#!/usr/bin/env bash

set -euo

read -p "Enter commit message: " COMMIT_MSG

# read -p "Enter repository link : " REPO_LINK


git add .

git status

git commit -m "$COMMIT_MSG"

git push 


