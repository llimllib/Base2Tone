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
      <td>#1d262f</td>
      <td>#004a9e</td>
      <td>#717a77</td>
      <td>#067953</td>
    </tr>
    <tr>
      <td>1</td>
      <td>#27323f</td>
      <td>#1757a1</td>
      <td>#818d89</td>
      <td>#088c60</td>
    </tr>
    <tr>
      <td>2</td>
      <td>#405368</td>
      <td>#34659d</td>
      <td>#939f9b</td>
      <td>#0aa370</td>
    </tr>
    <tr>
      <td>3</td>
      <td>#4a5f78</td>
      <td>#57718e</td>
      <td>#a6b0ad</td>
      <td>#0db57d</td>
    </tr>
    <tr>
      <td>4</td>
      <td>#738191</td>
      <td>#6e9bcf</td>
      <td>#b7c2be</td>
      <td>#0fc78a</td>
    </tr>
    <tr>
      <td>5</td>
      <td>#8a96a3</td>
      <td>#7eb6f6</td>
      <td>#cbd7d3</td>
      <td>#14e19d</td>
    </tr>
    <tr>
    <td>6</td>
    <td>#a1aab5</td>
    <td>#afd4fe</td>
    <td>#e1eae7</td>
    <td>#2aeaaa</td>
    </tr>
    <tr>
    <td>7</td>
    <td>#b8bfc7</td>
    <td>#ebf4ff</td>
    <td>#f9fbfa</td>
    <td>#47ebb4</td>
    </tr>
  </tbody>
</table><?php ob_end_flush(); function compress_table($buffer) {
  $search = array("/>[[:space:]]+/", "/[[:space:]]+</");
  $replace = array(">","<");
  return preg_replace($search, $replace, $buffer);
}
?>

