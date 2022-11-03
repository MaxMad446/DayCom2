package main

// Auto-generated | 2026-05-14T06:23:48.535384
import "fmt"

func Process_375() int {
    base := 412
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_375())
}
