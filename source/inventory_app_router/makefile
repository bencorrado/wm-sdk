SRCS +=$(SRCS_PATH)app.c
SRCS +=$(SRCS_PATH)fifo.c
INCLUDES +=-I$(SRCS_PATH)

# Use App Scheduler and configure it
APP_SCHEDULER=yes
CFLAGS += -DAPP_SCHEDULER_MAX_TASKS=4
CFLAGS += -DAPP_SCHEDULER_MAX_EXEC_TIME_US=100
CFLAGS += -DWITH_DIRECTED_ADVERTISER
CFLAGS += -DNETWORK_ADDRESS=$(default_network_address)
CFLAGS += -DNETWORK_CHANNEL=$(default_network_channel)



