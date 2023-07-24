CC = gcc -pthread
CFLAGS = -g -O3 -Wall -Wno-unused-result `sdl-config --cflags`
LIBS = -L../bme -lbme -lm `sdl-config --libs`

RELEASE_DIR = ../release/
BMECONV = $(RELEASE_DIR)tools/bmeconv
MISSION_DIR = $(RELEASE_DIR)missions/
DATA_DIR = $(RELEASE_DIR)data/

all: $(MISSION_DIR)original.blk $(MISSION_DIR)test.blk $(DATA_DIR)bofh.pal     \
$(DATA_DIR)splash.pal $(DATA_DIR)splash.raw $(DATA_DIR)title.spr               \
$(DATA_DIR)player.spr $(DATA_DIR)weapon.spr $(DATA_DIR)machine.spr             \
$(DATA_DIR)fistman.spr $(DATA_DIR)gunman.spr $(DATA_DIR)shotgman.spr           \
$(DATA_DIR)uziman.spr $(DATA_DIR)tech.spr $(DATA_DIR)closet.spr                \
$(DATA_DIR)leader.spr $(DATA_DIR)sadist.spr $(DATA_DIR)bigfnt.spr              \
$(DATA_DIR)smallfnt.spr $(DATA_DIR)blackfnt.spr $(DATA_DIR)editor.spr          \
$(RELEASE_DIR)bofh $(RELEASE_DIR)bofhedit
.PHONY: all

$(RELEASE_DIR)bofh: actor.o bofh.o bomb.o enemy.o hiscore.o init.o sincos.o
	$(CC) $^ $(LIBS) -o$@

$(RELEASE_DIR)bofhedit: bofhedit.o endian.o
	$(CC) $^ $(LIBS) -o$@

%.o: %.c
	$(CC) -c $(CFLAGS) -o $@ $<

$(MISSION_DIR)original.blk: bofhblk.lbm
	$(BMECONV) -b -t255 -r254 -h253 $< $@

$(MISSION_DIR)test.blk: bofhblk.lbm
	$(BMECONV) -b -t255 -r254 -h253 $< $@

$(DATA_DIR)bofh.pal: bofhblk.lbm
	$(BMECONV) -p $< $@

$(DATA_DIR)%.pal: %.lbm
	$(BMECONV) -p $< $@

$(DATA_DIR)%.raw: %.lbm
	$(BMECONV) -n $< $@

$(DATA_DIR)%.spr: %.lbm
	$(BMECONV) -s -t255 -r254 -h253 $< $@

clean:
	rm -f $(RELEASE_DIR)bofh $(RELEASE_DIR)bofhedit *.o
	rm -f $(MISSION_DIR)original.blk $(MISSION_DIR)test.blk
	rm -f $(DATA_DIR)*.pal $(DATA_DIR)*.raw $(DATA_DIR)*.spr
.PHONY: clean
