INTERNAL_HOME	:= ../../internal
SDK_HOME	:= ../../sdk

include $(INTERNAL_HOME)/mk/app.mk

CFLAGS += -I$(INTERNAL_HOME)/include -I$(SDK_HOME)/include

LIBS := -L$(INTERNAL_HOME)/lib -ltool -lpkg -ldl
LIBS += -L$(SDK_HOME)/lib -lcommon -lws -lui -lCommu -lpthread

TARGET := tping

include $(INTERNAL_HOME)/mk/app_post.mk
