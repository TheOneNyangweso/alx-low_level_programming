.PHONY: all say_hello generate

all: say_hello generate

say_hello:
	@echo "Hello Sam"

# Adding a few more phony targets
generate:
	@echo "Creating empty text files..."
	touch file-{1..10}.txt

clean:
	@echo "Removing files..."
	rm *.txt