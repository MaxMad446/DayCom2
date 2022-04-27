package main

// Auto-generated | 2026-05-13T22:10:23.955738
import "fmt"

func Process_461() int {
    base := 21
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_461())
}
