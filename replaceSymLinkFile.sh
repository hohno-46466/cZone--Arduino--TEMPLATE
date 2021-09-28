#! /bin/sh
#
# replaceSymLinkFile.sh - Replace a symbolic link to a file with windows symbolic link
#
ls -l | egrep -e '->' | awk '{print $9, $11}' | sed 's|/|\\|g' | awk '{printf "del %s\ncmd.exe /c mklink %s %s\n",$1,$1,$2}'
