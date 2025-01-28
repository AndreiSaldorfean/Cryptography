## Functional specifications

- As a **user** I can **enter messages so that**, so that I can **view the encrypted result**.
- As a **user** I can **have verbose levels of the encryption process**, so that **I can take notes of the process**.
- As a **user** I can **have the results printed in different colors**, so **I can more easily read the different outputs**.

## Non-functional specifications

- The input shall be read as a `string` and converted into a `char[]`, for easier operations.
- The output shall be maintained as a `char[]`.
- The LFSR registers shall be implemented with a bidimensional table.
- The input method (cli/ file) shall be specificed via a flag when creating the build directory with cmake. (i.e `cmake -S . -B build -G "Unix Makefiles" -DFILE`)
- The output shall be generated in  under a second. 
