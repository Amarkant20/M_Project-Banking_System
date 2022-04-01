SRC = main1.c\
src/newly_customer_for_opening_account_function.c\
src/already_existing_customer_function.c\
unity/unity.c\
src/function_for_rupees_to_doller_exchange.c\
src/function_for_rupees_to_euro_exchange.c

INC = inc

c.exe : $(SRC) $(TEST_SRC)
	gcc $^ -I$(INC) -o $@

run: c.exe
	./c.exe

clean :
	del c.exe