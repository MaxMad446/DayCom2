package main

// Auto-generated | 2026-05-12T20:47:58.532160
import "fmt"

func Process_421() int {
    base := 39
    sum := 0
    for i := 0; i < 25; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_421())
}
