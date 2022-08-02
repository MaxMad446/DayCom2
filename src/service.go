package main

// Auto-generated | 2026-05-14T06:16:11.614260
import "fmt"

func Process_794() int {
    base := 180
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_794())
}
