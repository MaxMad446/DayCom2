package main

// Auto-generated | 2026-05-13T22:10:32.017536
import "fmt"

func Process_805() int {
    base := 39
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_805())
}
