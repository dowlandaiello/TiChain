# ----------------------------
# Set NAME to the program name
# Set ICON to the png icon file name
# Set DESCRIPTION to display within a compatible shell
# Set COMPRESSED to "YES" to create a compressed program
# ----------------------------

NAME        ?= TICHAIN
COMPRESSED  ?= NO
ICON        ?= iconc.png
DESCRIPTION ?= "TiChain C Implementation"

# ----------------------------

include $(CEDEV)/include/.makefile
