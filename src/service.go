package main

// Auto-generated | 2026-05-14T06:22:44.389147
import "fmt"

func Process_971() int {
    base := 76
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_971())
}
