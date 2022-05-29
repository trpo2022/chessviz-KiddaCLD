APP_NAME = main LIB_NAME = lib TEST_NAME = test

        CC
        = g++

        CFLAGS
        = -Wall - Wextra - Werror CPPFLAGS = -I src - MP - MMD CPPFLAGST
        = -I thirdparty - MP
        - MMD

                BIN_DIR
        = bin OBJ_DIR = obj SRC_DIR = src

                TEST_PATH
        = $(OBJ_DIR) / $(TEST_NAME) APP_PATH
        = $(BIN_DIR) / $(APP_NAME) / $(APP_NAME) LIB_PATH
        = $(OBJ_DIR) / $(SRC_DIR) / $(LIB_NAME)
        / $(LIB_NAME).a

                  SRC_EXT
        = c

                APP_SOURCES
        = $(shell find $(SRC_DIR) / $(APP_NAME) - name '*.$(SRC_EXT)')
                APP_OBJECTS
        = $(APP_SOURCES
            : $(SRC_DIR) / %.$(SRC_EXT) = $(OBJ_DIR) / $(SRC_DIR) / %.o)

                LIB_SOURCES
        = $(shell find $(SRC_DIR) / $(LIB_NAME) - name '*.$(SRC_EXT)')
                LIB_OBJECTS
        = $(LIB_SOURCES
            : $(SRC_DIR) / %.$(SRC_EXT) = $(OBJ_DIR) / $(SRC_DIR) / %.o)

                DEPS
        = $(APP_OBJECTS
            :.o =.d) $(LIB_OBJECTS
                       :.o =.d)

                        .PHONY : all all : $(APP_PATH)

                - include $(DEPS)

                        $(APP_PATH)
    : $(APP_OBJECTS) $(LIB_PATH) $(CC) $(CFLAGS) $(CPPFLAGS) $
        ^ -o $ @$(LDFLAGS) $(LDLIBS)

                  $(LIB_PATH)
    : $(LIB_OBJECTS) ar rcs $
      @$ ^

        $(OBJ_DIR) / %.o : %.c $(CC) - c $(CFLAGS) $(CPPFLAGS) $
                < -o $ @

                                .PHONY : clean clean
    : $(RM) $(APP_PATH) $(LIB_PATH) find $(OBJ_DIR)
                        - name '*.o' - exec $(RM) '{}' \;
find $(OBJ_DIR) - name '*.d' - exec $(RM) '{}' \;
rm bin / test
                / test

                          .PHONY : test test
    : $(BIN_DIR) / $(TEST_NAME)
                / $(TEST_NAME)

                        $(BIN_DIR)
                / $(TEST_NAME)
                / $(TEST_NAME)
    : $(TEST_PATH) / main.o $(TEST_PATH)
      / test.o $(LIB_PATH) $(CC) $(CFLAGS) $(CPPFLAGS) $
        ^ -o $ @

                                $(TEST_PATH)
                                / main.o
    : test / main.c g++ - c $(CFLAGS) $(CPPFLAGS) $(CPPFLAGST) $ < -o $ @

                                                                   $(TEST_PATH)
                                / test.o
    : test / test.c g++ - c $(CFLAGS) $(CPPFLAGS) $(CPPFLAGST) $ < -o $ @