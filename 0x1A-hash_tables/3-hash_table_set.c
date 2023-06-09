#include "hash_tables.h"

/**
 * hash_table_set - sets key in hash table
 * @ht: hash table
 * @key: key to be inserted
 * @value: value of key
 *
 * Return: 1 (success) 0 (fail)
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value) {
    unsigned long int index;
    hash_node_t *current;
    hash_node_t *new_node;
    char *key_copy;
    char *value_copy;

    if (ht == NULL || key == NULL || *key == '\0') {
        return 0;
    }

    index = key_index((const unsigned char *)key, ht->size);

    current = ht->array[index];
    while (current != NULL) {
        if (strcmp(current->key, key) == 0) {
            free(current->value);
            current->value = strdup(value);
            if (current->value == NULL) {
                return 0;
            }
            return 1;
        }
        current = current->next;
    }

    new_node = malloc(sizeof(hash_node_t));
    if (new_node == NULL) {
        return 0;
    }

    key_copy = strdup(key);
    if (key_copy == NULL) {
        free(new_node);
        return 0;
    }

    value_copy = strdup(value);
    if (value_copy == NULL) {
        free(key_copy);
        free(new_node);
        return 0;
    }

    new_node->key = key_copy;
    new_node->value = value_copy;
    new_node->next = ht->array[index];
    ht->array[index] = new_node;

    return 1;
}

