package main

// Auto-generated | 2026-05-14T18:15:24.144965
import "fmt"

func Process_876() int {
    base := 480
    sum := 0
    for i := 0; i < 25; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_876())
}
