#!/usr/bin/python3
""" island_perimeter.py """


def island_perimeter(grid):
    """ Finds the perimeter of the given island and returns it """
    perim = 0

    if grid:
        grid_length = len(grid)
        grid_width = len(grid[0])

        for i in range(grid_length):
            for j in range(grid_width):
                if grid[i][j] != 0:
                    # Check left side
                    if j == 0 or grid[i][j-1] != 1:
                        perim += 1
                    # Check above
                    if i == 0 or grid[i-1][j] != 1:
                        perim += 1
                    # Check right side
                    if j == grid_width - 1 or grid[i][j+1] != 1:
                        perim += 1
                    # Check below
                    if i == grid_length - 1 or grid[i+1][j] != 1:
                        perim += 1

    return perim
