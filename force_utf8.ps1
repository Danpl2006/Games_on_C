# Принудительная конвертация ВСЕХ текстовых файлов
$files = Get-ChildItem -Recurse -Include *.cpp, *.h, *.txt, *.md

foreach ($file in $files) {
    # Читаем как UTF-8 без BOM (или что есть)
    $content = [System.IO.File]::ReadAllText($file.FullName, [System.Text.Encoding]::UTF8)
    
    # Записываем с UTF-8 BOM
    $utf8WithBom = New-Object System.Text.UTF8Encoding $true
    [System.IO.File]::WriteAllText($file.FullName, $content, $utf8WithBom)
    
    Write-Host "Fixed: $($file.Name)"
}