#!/usr/bin/python3
def island_perimeter(grid):
    for i in grid:
        for j in i:
            if j == 1:
                perimeter = j * j
    return perimeter
