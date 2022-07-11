package main

// Auto-generated | 2026-05-14T06:14:34.295769
import "fmt"

func Process_542() int {
    base := 232
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_542())
}
