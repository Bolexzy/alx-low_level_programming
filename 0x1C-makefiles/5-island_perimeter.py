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

    num_rows = len(grid)
    num_cols = len(grid[0])

    for r in range(num_rows):
        for c in range(num_cols):
            if grid[r][c] == 1:
                # Count the top and bottom sides of the island
                if r == 0 or grid[r-1][c] == 0:
                    height += 1
                if r == num_rows-1 or grid[r+1][c] == 0:
                    height += 1

                # Count the left and right sides of the island
                if c == 0 or grid[r][c-1] == 0:
                    width += 1
                if c == num_cols-1 or grid[r][c+1] == 0:
                    width += 1

    return (height + width)
