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
      <td>#322d29</td>
      <td>#6f5849</td>
      <td>#736d5e</td>
      <td>#9c8349</td>
    </tr>
    <tr>
      <td>1</td>
      <td>#3f3a37</td>
      <td>#786254</td>
      <td>#88806d</td>
      <td>#b3944d</td>
    </tr>
    <tr>
      <td>2</td>
      <td>#5b534d</td>
      <td>#816d5f</td>
      <td>#9a927e</td>
      <td>#bfa05a</td>
    </tr>
    <tr>
      <td>3</td>
      <td>#6a5f58</td>
      <td>#88786d</td>
      <td>#aaa392</td>
      <td>#cda956</td>
    </tr>
    <tr>
      <td>4</td>
      <td>#796b63</td>
      <td>#967e6e</td>
      <td>#bbb4a5</td>
      <td>#d9b154</td>
    </tr>
    <tr>
      <td>5</td>
      <td>#a3948a</td>
      <td>#a48774</td>
      <td>#cfc9b9</td>
      <td>#e6b84d</td>
    </tr>
    <tr>
    <td>6</td>
    <td>#b5a9a1</td>
    <td>#dfb99f</td>
    <td>#e2dcd0</td>
    <td>#f1be46</td>
    </tr>
    <tr>
    <td>7</td>
    <td>#c7beb8</td>
    <td>#fff3eb</td>
    <td>#f2efe8</td>
    <td>#fcc440</td>
    </tr>
  </tbody>
</table><?php ob_end_flush(); function compress_table($buffer) {
  $search = array("/>[[:space:]]+/", "/[[:space:]]+</");
  $replace = array(">","<");
  return preg_replace($search, $replace, $buffer);
}
?>

