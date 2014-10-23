NAME    := BirdyBIOS
BUILD   := build
EXEC    := $(BUILD)/$(NAME)
BIN_DIR := /usr/local/bin

all: build

build: $(NAME).c
	mkdir -p $(BUILD)
	gcc -o $(EXEC) $<

test: build
	./$(EXEC)

install: build
	install -m 0755 $(EXEC) $(BIN_DIR)

uninstall:
	rm -f $(BIN_DIR)/$(NAME)

clean:
	rm -rf $(BUILD)