#passar txt a pdf
  pandoc file.txt -o file.pdf

#passar md a pdf (latex looks)
  pandoc file.md -o file.pdf

#passar md a pdf (presentacions)
  pandoc file.md -t beamer -o file.pdf

## exemple 'pres.md':
  ```
    ---
    title:
    - Presentació guay
    author:
    - Lluís Bosch
    ---
    # Section 1
    Això és la secció 1
    ## Subsection 1
    text 2
    + list item 1
    + list item 2
    ## Subsection 1
    text 2
    + list item 1
    + list item 2
  ```
