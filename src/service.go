package main

// Auto-generated | 2026-05-14T06:13:01.475159
import "fmt"

func Process_785() int {
    base := 470
    sum := 0
    for i := 0; i < 11; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_785())
}
