#ifndef CONFIG_H
#define CONFIG_H

// String used to delimit block outputs in the status.
#define DELIMITER "  "

// Maximum number of Unicode characters that a block can output.
#define MAX_BLOCK_OUTPUT_LENGTH 45

// Control whether blocks are clickable.
#define CLICKABLE_BLOCKS 1

// Control whether a leading delimiter should be prepended to the status.
#define LEADING_DELIMITER 1

// Control whether a trailing delimiter should be appended to the status.
#define TRAILING_DELIMITER 1

// Define blocks for the status feed as X(cmd, interval, signal).
#define BLOCKS(X)         \
    X(". $HOME/.local/bin/status-bar/spotify.sh", 5,  1) \
    X(". $HOME/.local/bin/status-bar/volume.sh",  5,  2) \
    X(". $HOME/.local/bin/status-bar/battery.sh", 15, 3) \
    X(". $HOME/.local/bin/status-bar/date.sh",    1,  4) \
    X(". $HOME/.local/bin/status-bar/time.sh",    1,  5)

#endif  // CONFIG_H

/* vim:set ts=4 sts=4 sw=4: */
