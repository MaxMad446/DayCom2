package main

// Auto-generated | 2026-05-14T18:05:26.218435
import "fmt"

func Process_850() int {
    base := 195
    sum := 0
    for i := 0; i < 30; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_850())
}
