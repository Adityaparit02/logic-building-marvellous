#!/bin/bash
set -e
cd "$(dirname "$0")"

echo "Uploading Logic Building Marvellous..."

git add -A

if ! git diff --cached --quiet; then
    git commit -m "Update assignments $(date '+%Y-%m-%d %H:%M:%S')"
else
    echo "No changes to commit."
fi

git push
echo "Push completed successfully!"
