#!/usr/bin/python3
"""this is a mearing function"""


def island_perimeter(grid):
    """this is a function to measure perimet of an island"""
    x = len(grid[0])
    
    y = len(grid)

    nobes = 0

    s = 0

    for i in range(y):
        for j in range(x):
            if grid[i][j] == 1:
                s += 1
                if (j > 0 and grid[i][j - 1] == 1):
                    nobes += 1
                if (i > 0 and grid[i - 1][j] == 1):
                    nobes += 1
    return s * 4 - nobes * 2
