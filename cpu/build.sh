set -e

rm -rf "*.o"
rm -rf "main.o"

echo "Locating source files:"

source_files=$(find ./ -name "*.c")
find ./ -name "*.c"
echo "Compiling source files"
gcc -c -Wall -Wextra $source_files

echo "Building objects:"
find ./ -name "*.o"
object_files=$(find ./ -name "*.o")

echo "Stitching objects"
gcc $object_files -O2 -o main

echo "Build complete"
