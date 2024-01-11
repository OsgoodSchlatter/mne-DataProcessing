#!/bin/bash

# Specify the folders where you want to delete files
folders=("handsOn2b" ".")

# Loop through each folder
for folder in "${folders[@]}"; do
  echo "Processing files in $folder"
  
  # Delete files with extensions other than .cxx
  find "$folder" -type f ! -name '*.cxx' -delete

  echo "Deleted files with extensions other than .cxx in $folder"
done

echo "Script completed"
