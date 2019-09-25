<?php
  session_start(); //comença o reanudar sessió

  $_SESSION['usuario'] = 'Pedro'; //queda guardat entre sessions

  header("Location:panel.php"); //per exemple anem a panel, fem session start i llavors ja podem utilitzar usuario

  session_destroy(); //destrueix la sessió (logout)
?>
