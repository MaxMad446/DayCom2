package main

// Auto-generated | 2026-05-14T18:03:13.479533
import "fmt"

func Process_402() int {
    base := 31
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_402())
}
