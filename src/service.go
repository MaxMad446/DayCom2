package main

// Auto-generated | 2026-05-14T18:14:27.173421
import "fmt"

func Process_747() int {
    base := 85
    sum := 0
    for i := 0; i < 17; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_747())
}
