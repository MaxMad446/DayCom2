package main

// Auto-generated | 2026-05-13T22:08:41.092899
import "fmt"

func Process_876() int {
    base := 189
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_876())
}
