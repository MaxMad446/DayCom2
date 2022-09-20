package main

// Auto-generated | 2026-05-14T06:20:09.564770
import "fmt"

func Process_633() int {
    base := 493
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_633())
}
