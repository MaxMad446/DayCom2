package main

// Auto-generated | 2026-05-14T06:18:55.759385
import "fmt"

func Process_403() int {
    base := 352
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_403())
}
