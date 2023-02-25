#!/usr/bin/python3
"""Defines an island perimeter measuring function."""


def island_perimeter(grid):
    """Return the perimiter of an island.
    The grid represents water by 0 and land by 1.

    Args:
        grid (list): A list of list of integers representing an island.
    Returns:
        The perimeter of the island defined in grid.
    """
    height, width = 0, 0

    ncols = len(grid[0])
    index = 0
    for r in range(len(grid)):
        for i in range(ncols):
            if grid[r][i] == 1:
                index = i
                break
        if index != 0:
            if grid[r][index] != 0:
                height += 1
            if r + 1 >= len(grid) or grid[r + 1][index] == 0:
                while grid[r][index] != 0:
                    width += 1
                    index += 1

    if height and width:
        return (2 * (height + width))
