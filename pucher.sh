#!/usr/bin/env bash

set -euo

read -ep $'Enter Operation:\n(1) for cloning\n(2) for pushing\n(3) Cloning and Pushing a file/directory\n|x| Operation : ' OP
if [ "$OP" == '1' ];then
    read -p "Enter Repository Link: " REPO_LINK
    read -p "Enter Repository Name: " REPO_NAME
    git clone "$REPO_LINK" "$REPO_NAME"
    cd "$REPO_NAME"
    clear
    echo -e "Success\n"
    exit 0
fi

if [ "$OP" == '2' ];then
    read -p "Enter commit message: " COMMIT_MSG
    git add .
    git status
    git commit -m "$COMMIT_MSG"
    git push 
    clear
    echo -e "Success\n"
    exit 0
fi

if [ "$OP" == '3' ];then
    read -p "Enter Repository Link: " REPO_LINK
    read -p "Enter Repository Name: " REPO_NAME
    read -p "Enter file/directory path/name: " fd
    git clone "$REPO_LINK" "$REPO_NAME"
    cd "$REPO_NAME"
    cp -r "$fd" .
    read -p "Enter commit message: " COMMIT_MSG
    git add .
    git status
    git commit -m "$COMMIT_MSG"
    git push
    clear
    echo -e "Success\n"
    exit 0
fi


echo -e "Please Enter Valid Args"
exit 1
