#include "nodes.hpp"

extern "C" {
#include <canard.h>
#include <zephyr/sys/printk.h>
}

void print_nodes_message() { printk("Hello from nodes.cpp!\n"); }
