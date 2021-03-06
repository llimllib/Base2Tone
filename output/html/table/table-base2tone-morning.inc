<?php ob_start('compress_table'); ?><section class="tables">
<h3 class="h3 _mbs">Color Hex Values Table</h3>
<table>
<thead>
  <tr>
    <th></th><th>A</th><th>B</th><th>C</th><th>D</th>
  </tr>
</thead>
  <tbody>
    <tr>
      <td>0</td>
      <td>#232834</td>
      <td>#063289</td>
      <td>#544d40</td>
      <td>#2d2006</td>
    </tr>
    <tr>
      <td>1</td>
      <td>#31363f</td>
      <td>#0b3c9d</td>
      <td>#69604f</td>
      <td>#594212</td>
    </tr>
    <tr>
      <td>2</td>
      <td>#4f5664</td>
      <td>#1659df</td>
      <td>#867b65</td>
      <td>#896724</td>
    </tr>
    <tr>
      <td>3</td>
      <td>#656e81</td>
      <td>#3d75e6</td>
      <td>#9c927c</td>
      <td>#9a7c42</td>
    </tr>
    <tr>
      <td>4</td>
      <td>#707a8f</td>
      <td>#728fcb</td>
      <td>#b6ad9a</td>
      <td>#b29762</td>
    </tr>
    <tr>
      <td>5</td>
      <td>#7e889a</td>
      <td>#93abdc</td>
      <td>#cdc4b1</td>
      <td>#c6b28b</td>
    </tr>
    <tr>
    <td>6</td>
    <td>#8d95a5</td>
    <td>#b7c9eb</td>
    <td>#e3dcce</td>
    <td>#d1c2a3</td>
    </tr>
    <tr>
    <td>7</td>
    <td>#a9afbc</td>
    <td>#dee6f7</td>
    <td>#faf8f5</td>
    <td>#e5ddcd</td>
    </tr>
  </tbody>
</table><?php ob_end_flush(); function compress_table($buffer) {
  $search = array("/>[[:space:]]+/", "/[[:space:]]+</");
  $replace = array(">","<");
  return preg_replace($search, $replace, $buffer);
}
?>

