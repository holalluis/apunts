"funció custom per executar comanda bash i enganxar output a sota
"(inspirat per acme text editor)
function! Executa_linia_actual_a_bash()
  normal yy
  ":tabnew
  ".nnoremap <buffer> q :q!<cr>
  normal p
  :.!bash
endfunction

"mapeja la funció a 'gb'
nnoremap gb :call Executa_linia_actual_a_bash()<CR>

"test it
ls
cal
date
man ls
echo $EDITOR
echo $BROWSER
