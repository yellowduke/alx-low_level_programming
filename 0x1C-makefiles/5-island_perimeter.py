#!/usr/bin/python3
""" Defines the perimeter of the island described in grid """


def island_perimeter(grid):
    """ Return perimeter of grid where "1" is found """
    perimeter = 0
    for c in range(len(grid)):
        for d in range(len(grid[0])):
            if grid[c][d] == 1:
                if (c - 1) == -1 or grid[c - 1][d] == 0:
                    perimeter += 1
                if (c + 1) == (len(grid) - 1) or grid[c + 1][b] == 0:
                    perimeter += 1
                if (d - 1) == 0 or grid[c][d - 1] == 0:
                    perimeter += 1
                if (d + 1) == (len(grid[0]) - 1) or grid[c][d + 1] == 0:
                    perimeter += 1
    return perimeter
